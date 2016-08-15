using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;
using ReferenceWRLImplementation;

namespace CSharpUnitTestProject
{
    [TestClass]
    public class StaticClassUnitTests
    {
        [TestMethod]
        public void StaticMethodWithNoParametersTest()
        {
            StaticClass.StaticMethodWithNoParameters();
        }

        [TestMethod]
        public void StaticMethodWithParamTest()
        {
            StaticClass.StaticMethodWithParam(20);
        }

        [TestMethod]
        public void StaticMethodWithRetValTest()
        {
            uint expectedVal = 25;
            var actualVal = StaticClass.StaticMethodWithRetVal();
            Assert.AreEqual(expectedVal, actualVal);
        }
    }
}
