#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiFlyout : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiFlyout(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiFlyout") {}
    public:
        void Show(void* anchor, const char* key, const char* title, const char* subtitle, void* items, const char* footer = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* managed_3 = Api() && Api()->NewString ? Api()->NewString(subtitle ? subtitle : "") : nullptr; void* managed_5 = Api() && Api()->NewString ? Api()->NewString(footer ? footer : "") : nullptr; void* __callArgs[] = { anchor, managed_1, managed_2, managed_3, items, managed_5 }; CallStatic("Show", __callArgs, 6); }
        void Hide() const { CallStatic("Hide", nullptr, 0); }
    };
}
