using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;
using ReferenceWRLImplementation;

namespace CSharpUnitTestProject
{
    [TestClass]
    public class ActivatableStaticClassUnitTests
    {
        [TestMethod]
        public void StaticMethodTest()
        {
            uint expectedVal = 30;
            var actualVal = ActivatableStaticClass.StaticMethod();
            Assert.AreEqual(expectedVal, actualVal);
        }

        [TestMethod]
        public void NonStaticMethodTest()
        {
            uint expectedVal = 35;
            var activatableStaticClass = new ActivatableStaticClass();
            var actualVal = activatableStaticClass.NonStaticMethod();
            Assert.AreEqual(expectedVal, actualVal);
        }
    }
}
