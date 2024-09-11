/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
    let i = 0;
    for(let it of args){
        i++;
    }
    
    return i;
};

/**
 * argumentsLength(1, 2, 3); // 3
 */