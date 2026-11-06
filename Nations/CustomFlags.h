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
        void* For_(int nationId) const { void* args[] = { &nationId }; return CallStatic("For", args, 1); }
        bool Has(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<bool>("Has", args, 1); }
        void Set(int nationId, void* pixels, int w, int h) const { void* args[] = { &nationId, pixels, &w, &h }; CallStatic("Set", args, 4); }
        bool SetFromPng(int nationId, void* png) const { void* args[] = { &nationId, png }; return CallStaticValue<bool>("SetFromPng", args, 2); }
        bool SetFromBase64(int nationId, const char* base64) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(base64 ? base64 : "") : nullptr; void* args[] = { &nationId, managed_1 }; return CallStaticValue<bool>("SetFromBase64", args, 2); }
        void Remove(int nationId) const { void* args[] = { &nationId }; CallStatic("Remove", args, 1); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void* Png(int nationId) const { void* args[] = { &nationId }; return CallStatic("Png", args, 1); }
        void* Base64(int nationId) const { void* args[] = { &nationId }; return CallStatic("Base64", args, 1); }
        void* Pixels(int nationId, int& w, int& h) const { void* args[] = { &nationId, &w, &h }; return CallStatic("Pixels", args, 3); }
        void* Export_(int nationId, const char* nationName) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(nationName ? nationName : "") : nullptr; void* args[] = { &nationId, managed_1 }; return CallStatic("Export", args, 2); }
        void* tex() const { return ReadField<void*>("tex"); }
        void SetTex(void* value) const { WriteField<void*>("tex", value); }
        void* sprite() const { return ReadField<void*>("sprite"); }
        void SetSprite(void* value) const { WriteField<void*>("sprite", value); }
    };
}
