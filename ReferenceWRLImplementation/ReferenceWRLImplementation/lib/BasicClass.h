#pragma once
namespace ABI
{
	namespace ReferenceWRLImplementation
	{
		class BasicClass WrlFinal
			: public Microsoft::WRL::RuntimeClass < IBasicClass, Microsoft::WRL::FtmBase >
		{
			// Note: InspectableClass changes visibility to private:, so change it as needed after
			InspectableClass(RuntimeClass_ReferenceWRLImplementation_BasicClass, BaseTrust);

		public:
			BasicClass();
			~BasicClass();

			// Tip: specifying "override" causes compile-time checking against the interface
			// to help catch mistakes.

			IFACEMETHOD(BasicMethod)() override;

			IFACEMETHOD(MethodWithBaseTypeParameter)(
				_In_ UINT32 intParam) override;

			IFACEMETHOD(MethodWithStringParameter)(
				_In_ HSTRING strParam) override;

			IFACEMETHOD(MethodWithReferenceTypeParameter)(
				_In_ ABI::ReferenceWRLImplementation::ISomeOtherType *refParam) override;

			IFACEMETHOD(MethodWithBaseTypeReturnValue)(
				_Out_ UINT32 *intRetVal) override;

			IFACEMETHOD(MethodWithStringReturnValue)(
				_Out_ HSTRING *strRetVal) override;

			IFACEMETHOD(MethodWithReferenceTypeReturnValue)(
				_Outptr_ ABI::ReferenceWRLImplementation::ISomeOtherType **refTypeRetVal) override;

			DEFINE_PROPERTY_VALUE(UINT32, BaseTypeProperty, baseTypeProperty);

			DEFINE_PROPERTY_STRING(StringProperty, stringProperty);

			DEFINE_PROPERTY_PTR(ISomeOtherType, RefTypeProperty, refTypeProperty);

		private:
			UINT32 _intValue;
			Microsoft::WRL::Wrappers::HString _strValue;
			Microsoft::WRL::ComPtr<ISomeOtherType> _refValue;
		};

		// IMPORTANT: ActivatableClass must appear outside the class scope but in the same namespace
		ActivatableClass(BasicClass);
	}
}