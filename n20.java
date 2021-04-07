import java.sql.Connection;
import java.sql.Statement;
import java.sql.DriverManager;
import java.sql.SQLException;
public class n20 {


public static void main(String[] args) {

Connection c = null;
Statement stmt=null;
      try {
         Class.forName("org.postgresql.Driver");
         c = DriverManager
            .getConnection("jdbc:postgresql://localhost:5433/VIT",
            "postgres", "VIT@123");
         
         System.out.println(c);
         stmt = c.createStatement();
         String sql = "CREATE TABLE programmer " +
            "(ID INT PRIMARY KEY     NOT NULL," +
            " NAME           TEXT    NOT NULL, " +
            " AGE            INT     NOT NULL, " +
            " ADDRESS        CHAR(50), " +
            " SALARY         REAL)";
         stmt.executeUpdate(sql);
         stmt.close();
         c.close();
         
      }
      catch (Exception e) {
         e.printStackTrace();
         System.err.println(e.getClass().getName()+": "+e.getMessage());
         System.exit(0);
      }
      System.out.println("opened DB successfully");
}

}
