using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;
using ReferenceWRLImplementation;

namespace CSharpUnitTestProject
{
    [TestClass]
    public class BasicClassUnitTests
    {
        [TestMethod]
        public void BasicMethodTest()
        {
            var basicClass = new BasicClass();
            basicClass.BasicMethod();
        }

        [TestMethod]
        public void MethodWithBaseTypeParamTest()
        {
            var basicClass = new BasicClass();
            basicClass.MethodWithBaseTypeParameter(5);
        }

        [TestMethod]
        public void MethodWithStringParamTest()
        {
            var basicClass = new BasicClass();
            basicClass.MethodWithStringParameter("Testing");
        }

        [TestMethod]
        public void MethodWithRefTypeParamTest()
        {
            var basicClass = new BasicClass();
            basicClass.MethodWithReferenceTypeParameter(new SomeOtherType());
        }

        [TestMethod]
        public void MethodWithBaseTypeRetValTest()
        {
            uint expectedVal = 5;
            var basicClass = new BasicClass();
            basicClass.MethodWithBaseTypeParameter(expectedVal);
            var baseTypeRetVal = basicClass.MethodWithBaseTypeReturnValue();
            Assert.AreEqual<uint>(expectedVal, baseTypeRetVal);
        }

        [TestMethod]
        public void MethodWithStringRetValTest()
        {
            string expectedVal = "Testing";
            var basicClass = new BasicClass();
            basicClass.MethodWithStringParameter(expectedVal);
            var strRetVal = basicClass.MethodWithStringReturnValue();
            Assert.AreEqual<string>(expectedVal, strRetVal);
        }

        [TestMethod]
        public void MethodWithRefTypeRetValTest()
        {
            var expectedVal = new SomeOtherType();
            var basicClass = new BasicClass();
            basicClass.MethodWithReferenceTypeParameter(expectedVal);
            var refTypeRetVal = basicClass.MethodWithReferenceTypeReturnValue();
            Assert.AreEqual<ISomeOtherType>(expectedVal, refTypeRetVal);
        }

        [TestMethod]
        public void BaseTypePropertyTest()
        {
            uint expectedVal = 10;
            var basicClass = new BasicClass();
            basicClass.BaseTypeProperty = expectedVal;
            Assert.AreEqual<uint>(expectedVal, basicClass.BaseTypeProperty);
        }

        [TestMethod]
        public void StringPropertyTest()
        {
            string expectedVal = "Testing property";
            var basicClass = new BasicClass();
            basicClass.StringProperty = expectedVal;
            Assert.AreEqual<string>(expectedVal, basicClass.StringProperty);
        }

        [TestMethod]
        public void RefTypePropertyTest()
        {
            var expectedVal = new SomeOtherType();
            var basicClass = new BasicClass();
            basicClass.RefTypeProperty = expectedVal;
            Assert.AreEqual<ISomeOtherType>(expectedVal, basicClass.RefTypeProperty);
        }
    }
}
