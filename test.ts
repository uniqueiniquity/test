/** 
 * Documentation for C 
 */
class C { 
    /** 
     * constructor documentation
     * @param a my parameter documentation
     * @param b another parameter documentation
     */
    constructor(private a: string, public b: C) { }

    foo(bar:string) {
        return this.b;
    }
}