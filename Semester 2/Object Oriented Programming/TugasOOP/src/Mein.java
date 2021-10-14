import java.util.*;

public class Mein {

	Scanner scan = new Scanner(System.in);
	int input = 0;
	ArrayList<Binusian> Binus = new ArrayList<Binusian>();
	ArrayList<Student> StudentList = new ArrayList<Student>();
	ArrayList<Lecturer> LecturerList = new ArrayList<Lecturer>();
	String Email;

	void Printmenu() {
		while (input != 3) {
			System.out.println("1. Add Binusian");
			System.out.println("2. View Binusian");
			System.out.println("3. Exit");
			Getinput();
		}
	}

	void Getinput() {
		input = scan.nextInt();
		scan.nextLine();
		if (input == 1)
			AddBinusian();
		else if (input == 2)
			ViewBinusian();
	}

	void AddBinusian()
	{
		String BinusianID;
		String Name;
		
		String Role;
		Integer Age;
		
		while(true)
		{
			System.out.printf("Name [2 words] : ");
			Name=scan.nextLine();
			System.out.println();
			if(!Name.startsWith(" ")&&Name.contains(" "))
			{
				break;
			}
		}
		
		while(true)
		{
			String x;
			System.out.printf("Age [17-55] : ");
			try
			{
				x=scan.nextLine();
				Age=Integer.parseInt(x);
				if(Age>=17&&Age<=55)
				{
					break;
				}
			}
			catch(Exception e)
			{
				System.out.println("Input must be integer!");
			}
		}
		
		while(true)
		{
			int role;
			System.out.println("Select the role of this binusian");
			System.out.println("1. Binusian");
			System.out.println("2. Student");
			System.out.println("3. Lecturer");
			System.out.printf("Role : ");
			role=scan.nextInt();scan.nextLine();
			System.out.println();
			if(role==1)
			{
				Binusian data=new Binusian();
				data.setName(Name);
				data.setAge(Age);
				while(true)
				{
					System.out.printf("Role [ISS | Protekom | Staff] : ");
					Role=scan.nextLine();
					if(Role.equals("ISS")||Role.equals("Protekom")||Role.equals("Staff"))
					{
						break;
					}
				}
				data.setRole(Role);
				GetEmail();
				Email = Email.concat("@binus.ac.id");
				data.setEmail(Email);
				Binus.add(data);
				break;
			}
			else if(role==2)
			{
				Student student = new Student();
				student.setName(Name);
				student.setAge(Age);
				student.setRole("Student");
				GetEmail();
				Email=Email.concat("@binus.ac.id");
				student.setEmail(Email);

				while(true)
				{
					System.out.printf("Major [SOCS | SOIS] : ");
					String Major=scan.nextLine();
					if(Major.equals("SOCS")||Major.equals("SOIS"))
					{
						student.setMajor(Major);
						break;
					}
					
				}
				StudentList.add(student);
				break;
			}
			else if(role==3)
			{
				Lecturer lecturer = new Lecturer();
				lecturer.setName(Name);
				lecturer.setAge(Age);
				lecturer.setRole("Student");
				lecturer.setRole("Lecturer");
				GetEmail();
				Email=Email.concat("@binus.edu");
				lecturer.setEmail(Email);
				LecturerList.add(lecturer);
				break;
			}
		}
		
	}

	void GetEmail() {
		while (true) {
			System.out.println("Email domain : ");
			Email = scan.nextLine();
			if (!Email.startsWith("@") && !Email.endsWith("@")) {
				break;
			}
		}
	}

	void ViewBinusian() {
		
		for(Binusian b : Binus) {
			System.out.printf(b.getBinusianID() + " " + b.getName() + "\t");
			System.out.printf("%s %d ", b.getRole(), b.getAge());
			b.getAdditionalInformation();
		}
		
		for(Student s : StudentList) {
			System.out.printf(s.getBinusianID() + " " + s.getName() + "\t");
			System.out.printf("%s %d ", s.getRole(), s.getAge());
			s.getAdditionalInformation();
		}
		
		for(Lecturer l : LecturerList) {
			System.out.printf(l.getBinusianID() + " " + l.getName() + "\t");
			System.out.printf("%s %d ", l.getRole(), l.getAge());
			l.getAdditionalInformation();
		}
	}

	public Mein() {
		Printmenu();
	}

	public static void main(String[] args) {
		new Mein();
		
	}

}
