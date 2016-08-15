using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;
using ReferenceWRLImplementation;

namespace CSharpUnitTestProject
{
    [TestClass]
    public class ParameterizedConstructorClassUnitTests
    {
        [TestMethod]
        public void DefaultConstructorTest()
        {
            var parameterizedConstructorClass = new ParameterizedConstructorClass();
            Assert.IsTrue(string.IsNullOrWhiteSpace(parameterizedConstructorClass.StringConstructorParam));
            Assert.IsNull(parameterizedConstructorClass.RefTypeConstructorParam);
        }

        [TestMethod]
        public void BaseTypeParamConstructorTest()
        {
            uint expectedVal = 15;
            var parameterizedConstructorClass = new ParameterizedConstructorClass(expectedVal);
            Assert.AreEqual(expectedVal, parameterizedConstructorClass.BaseTypeConstructorParam);
        }

        [TestMethod]
        public void StringParamConstructorTest()
        {
            string expectedVal = "Testing constructor";
            var parameterizedConstructorClass = new ParameterizedConstructorClass(expectedVal, default(uint));
            Assert.AreEqual(expectedVal, parameterizedConstructorClass.StringConstructorParam);
        }

        [TestMethod]
        public void RefTypeParamConstructorTest()
        {
            var expectedVal = new SomeOtherType();
            var parameterizedConstructorClass = new ParameterizedConstructorClass(expectedVal, default(uint), default(uint));
            Assert.AreEqual(expectedVal, parameterizedConstructorClass.RefTypeConstructorParam);
        }
    }
}
