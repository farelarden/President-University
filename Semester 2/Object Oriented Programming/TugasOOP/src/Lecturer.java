
public class Lecturer extends Binusian{

	private String LecturerCode;
	
	public String getLecturerCode() {
		return LecturerCode;
	}

	static String generateLecturerCode() {
		String code="D";
		for(int i=0;i<4;i++)
		{
			code=code+(int)(Math.random()*10);
		}
		return code;
	}
	
	public void getAdditionalInformation() {
		System.out.println();
	}
	
	public Lecturer() {
		LecturerCode = generateLecturerCode();
	}

}
