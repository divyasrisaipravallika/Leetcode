/**
 * @param {number[]} arr
 * @return {boolean}
 */
var threeConsecutiveOdds = function(arr) {
    var i = 0;
        while(i < arr.length){
            if(arr[i]%2==1){
                var c = 0;
                while(i < arr.length && arr[i]%2==1){
                    i++;
                    c++;
                }
                if(c >= 3) {return true;}
                
            }
            else i++;
        }
        return false;
};