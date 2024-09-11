const expect = (val) => {
    const toBe = (val2) => {
        if (val !== val2) {
            throw new Error(`Not Equal`);
        }
        return true;
    };

    const notToBe = (val2) => {
        if (val === val2) {
            throw new Error(`Equal`);
        }
        return true;
    };

    return {
        toBe,
        notToBe
    };
};
