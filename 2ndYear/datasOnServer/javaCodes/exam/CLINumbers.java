class CLINumbers {
    public static void main(String args[]){
        int max = -9999999;
        int min = 9999999;
        for(int i = 0; i < args.length; i++){
            int currentNum = Integer.parseInt(args[i]);
            if(currentNum > max)
                max = currentNum;
            if(currentNum < min)
                min = currentNum;
        }
        System.out.println("Smallest Integer : " + min);
        System.out.println("Largest Integer : " + max);
    }
}
