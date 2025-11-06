import java.util.HashMap;

public class twoSum {
  public static int [] answer(int args[], int target){
    HashMap<Integer,Integer> map = new HashMap<>();
    for(int i = 0; i < args.length; i++){
      map.put(args[i], i);
      if(map.containsKey(target - args[i])){
        return new int[]{map.get(target-args[i]),i};
      }
    }
    return new int[]{};
  }
  public static void main(String[] args) {
    int nums [] = {2,7,11,15};
    int target = 9;
    int results [] = answer(nums,target);
    for(int i = 0; i < results.length; i++){
      System.out.println(results[i]);
    }
  }
}
