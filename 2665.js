var createCounter = function(init) {
    var num = init;

    function inc() {
        num++;
        return num;
    }

    function dec() {
        num--;
        return num;
    }

    function set() {
        num = init;
        return num;
    }

    return {
        increment: inc,
        decrement: dec,
        reset: set
    };
};

/**
 * const counter = createCounter(5);
 * console.log(counter.increment()); // 6
 * console.log(counter.reset());    // 5
 * console.log(counter.decrement()); // 4
 */
