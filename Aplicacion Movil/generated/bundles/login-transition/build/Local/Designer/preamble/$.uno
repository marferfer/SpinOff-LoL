using Uno;
using Uno.Collections;
using Uno.UX;
using Uno.IO;
using Outracks.Simulator;
using Outracks.Simulator.Bytecode;
using Outracks.Simulator.Runtime;
using Outracks.Simulator.Client;
namespace Outracks.Simulator 
{ 
	public class GeneratedApplication : Outracks.Simulator.Client.Application
	{
		public GeneratedApplication()
			: base(
				new [] 
				{new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("127.0.0.1"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("169.254.131.50"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("192.168.43.233"), 12124)},"C:\\Users\\JuanJose\\Desktop\\Mario\\generated\\bundles\\login-transition\\LoginTransition.unoproj",new string[] 
				{ })
		{
			Runtime.Bundle.Initialize("LoginTransition");

			if defined(DotNet)
				Reflection = new DotNetReflectionWrapper(DotNetReflection.Load("C:/Users/JuanJose/Desktop/Mario/generated/bundles/login-transition/build/Local/Designer"));
			if defined(CPLUSPLUS)
				Reflection = new NativeReflection(new SimpleTypeMap());
		}
	}
}