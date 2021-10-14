
public class Binusian {
	
	static String generateBinusianId() {
		String id="BN";
		for(int i=0;i<9;i++)
		{
			id=id+(int)(Math.random()*10);
		}
		return id;
	}
	
	private String BinusianID;
	private String Name;
	private String Email;
	private String Role;
	private int Age;

	public void getAdditionalInformation() {
		// hanya untuk message
		System.out.println("This Binusian Role is " + Role);
	}

	public String getBinusianID() {
		return BinusianID;
	}

	public String getName() {
		return Name;
	}

	public void setName(String name) {
		Name = name;
	}

	public String getEmail() {
		return Email;
	}

	public void setEmail(String email) {
		Email = email;
	}

	public String getRole() {
		return Role;
	}

	public void setRole(String role) {
		Role = role;
	}

	public int getAge() {
		return Age;
	}

	public void setAge(int age) {
		Age = age;
	}

	public Binusian() {
		BinusianID = generateBinusianId();
	}

}
