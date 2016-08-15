#pragma once
namespace ABI
{
	namespace ReferenceWRLImplementation
	{
		class StaticClassStatics WrlFinal
			: public Microsoft::WRL::AgileActivationFactory < IStaticClassStatics >
		{
			InspectableClassStatic(RuntimeClass_ReferenceWRLImplementation_StaticClass, BaseTrust);

		public:
			IFACEMETHOD(StaticMethodWithNoParameters)(void) override;

			IFACEMETHOD(StaticMethodWithParam)(
				_In_ UINT32 intParam) override;

			IFACEMETHOD(StaticMethodWithRetVal)(
				_Outptr_ UINT32 *intRetVal) override;
		};
	}
}