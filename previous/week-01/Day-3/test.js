
function cubeNumber(number){
    if(typeof number !== "number"){
        return "please provide me a number"
    }
    else{
        const result1 = number**(3)
        return result1
    }

}




 

function matchFinder(string1, string2){
    if(string1 = string2){
        return "ture"
    }
     else if( string1 !== string2){
        return "false"
     }

   else if(typeof string1 !== "string" || typeof string2 !== "string"){
        return "this is error"
    }

}







function sortMaker(x,y){
   if(x > 1|| y > 1){
    return 

   }
   else if(x = y){
    return "equal"
}
else (x <= 0 || y <= 0) 
   { return "Invalid input"
}
}






function findAdderss(obj){
   if(typeof obj !== "object" ){
      return"please provide me a valid object"
   }
   else{
      const street = obj.street ||" __"
      const house = obj.house ||" __"
      const society = obj.society ||" __"

      return street  +  house +  society
   }
   

}






function canPay(changeArray,totalDue){
   if(!Array.isArray(arr)){
      return "plese provide me a number"
  }
  else{
      const x = changeArray;
      if(x <= totalDue){
         return true
      }
      else{
         return false
      }
  }
      }




