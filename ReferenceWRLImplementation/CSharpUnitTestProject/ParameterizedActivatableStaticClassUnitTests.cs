using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;
using ReferenceWRLImplementation;

namespace CSharpUnitTestProject
{
    [TestClass]
    public class ParameterizedActivatableStaticClassUnitTests
    {
        [TestMethod]
        public void DefaultConstructorTest()
        {
            var parameterizedActivatableStaticClass = new ParameterizedActivatableStaticClass();
        }

        [TestMethod]
        public void ParamConstructorTest()
        {
            uint expectedVal = 45;
            var parameterizedActivatableStaticClass = new ParameterizedActivatableStaticClass(expectedVal);
            Assert.AreEqual(expectedVal, parameterizedActivatableStaticClass.NonStaticMethod());
        }

        [TestMethod]
        public void StaticMethodTest()
        {
            uint expectedVal = 40;
            var actualVal = ParameterizedActivatableStaticClass.StaticMethod();
            Assert.AreEqual(expectedVal, actualVal);
        }

        [TestMethod]
        public void NonStaticMethodTest()
        {
            uint expectedVal = 50;
            var parameterizedActivatableStaticClass = new ParameterizedActivatableStaticClass(expectedVal);
            var actualVal = parameterizedActivatableStaticClass.NonStaticMethod();
            Assert.AreEqual(expectedVal, actualVal);
        }
    }
}
