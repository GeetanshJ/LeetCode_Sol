var cancellable = function(fn, args, t) {
    const timeoutId = setTimeout(() => {
        fn(...args);
    }, t);
    
    return function() {
        clearTimeout(timeoutId);
    };
};

/**
 * Example Usage:
 * 
 * const result = [];
 *
 * const fn = (x) => x * 5;
 * const args = [2], t = 20, cancelTimeMs = 50;
 *
 * const start = performance.now();
 *
 * const log = (...argsArr) => {
 *     const diff = Math.floor(performance.now() - start);
 *     result.push({"time": diff, "returned": fn(...argsArr)});
 * };
 *       
 * const cancel = cancellable(log, args, t);
 *
 * const maxT = Math.max(t, cancelTimeMs);
 * 
 * // Call cancel after `cancelTimeMs` milliseconds
 * setTimeout(cancel, cancelTimeMs);
 *
 * // Log the result after the maximum time
 * setTimeout(() => {
 *     console.log(result); // [{"time":20,"returned":10}]
 * }, maxT + 15);
 */
