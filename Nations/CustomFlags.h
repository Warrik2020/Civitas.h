#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class CustomFlags : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CustomFlags(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "CustomFlags") {}
    public:
        void* For_(int nationId) const { void* __callArgs[] = { &nationId }; return CallStatic("For", __callArgs, 1); }
        bool Has(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<bool>("Has", __callArgs, 1); }
        void Set(int nationId, void* pixels, int w, int h) const { void* __callArgs[] = { &nationId, pixels, &w, &h }; CallStatic("Set", __callArgs, 4); }
        bool SetFromPng(int nationId, void* png) const { void* __callArgs[] = { &nationId, png }; return CallStaticValue<bool>("SetFromPng", __callArgs, 2); }
        bool SetFromBase64(int nationId, const char* base64) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(base64 ? base64 : "") : nullptr; void* __callArgs[] = { &nationId, managed_1 }; return CallStaticValue<bool>("SetFromBase64", __callArgs, 2); }
        void Remove(int nationId) const { void* __callArgs[] = { &nationId }; CallStatic("Remove", __callArgs, 1); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void* Png(int nationId) const { void* __callArgs[] = { &nationId }; return CallStatic("Png", __callArgs, 1); }
        void* Base64(int nationId) const { void* __callArgs[] = { &nationId }; return CallStatic("Base64", __callArgs, 1); }
        void* Pixels(int nationId, int& w, int& h) const { void* __callArgs[] = { &nationId, &w, &h }; return CallStatic("Pixels", __callArgs, 3); }
        void* Export_(int nationId, const char* nationName) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(nationName ? nationName : "") : nullptr; void* __callArgs[] = { &nationId, managed_1 }; return CallStatic("Export", __callArgs, 2); }
    };
}
