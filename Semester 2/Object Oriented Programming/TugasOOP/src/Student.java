
public class Student extends Binusian {

	static String generateNIM() {
		String NIM = new String();
		for(int i=0;i<10;i++)
		{
			NIM=NIM+(int)(Math.random()*10);
		}
		return NIM;
	}

	private String NIM;

	public String getNIM() {
		return NIM;
	}

	public String getMajor() {
		return Major;
	}

	public void setMajor(String major) {
		Major = major;
	}

	private String Major;

	public void getAdditionalInformation() {
		System.out.println();
	}

	public Student() {
		NIM = generateNIM();
	}

}
