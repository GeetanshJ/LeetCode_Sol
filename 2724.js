const sortBy = (arr, fn) => arr.sort((a, b) => fn(a) - fn(b));
