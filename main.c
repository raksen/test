package myServer;

import java.sql.*;


public class testSQL {
	
	public static Connection getConnection(){		
		
		Connection conn = null;
		
		try {
			
			Class.forName("com.mysql.jdbc.Driver");
			
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		}
		try {
			
			conn = DriverManager.getConnection("jdbc:mysql://localhost:3306","root","gxuea123");
			
		} catch (SQLException e) {

			e.printStackTrace();
		}
		return conn;
	}

	public static void  main(String[] args) {

		new serverListener().start();	
	}
}
