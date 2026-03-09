interface Player { void play(); }

class Child implements Player {
    public void play() { System.out.println("Child plays with toys"); }
}

class Musician implements Player {
    public void play() { System.out.println("Musician plays instruments"); }
}

class Actor implements Player {
    public void play() { System.out.println("Actor plays in movies"); }
}

public class P9_PlayerInterface {
    public static void main(String args[]) {
        Player p1 = new Child();
        Player p2 = new Musician();
        Player p3 = new Actor();
        
        p1.play();
        p2.play();
        p3.play();
    }
}
