#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class FlagCloth : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FlagCloth(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "FlagCloth") {}
    public:
        void* For_(void* n) const { void* args[] = { n }; return CallStatic("For", args, 1); }
        bool TryPixels(void* n, int maxWidth, void* px, int& w, int& h) const { void* args[] = { n, &maxWidth, &px, &w, &h }; return CallStaticValue<bool>("TryPixels", args, 5); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        int BakeWidth() const { return ReadStaticField<int>("BakeWidth"); }
        void* shade() const { return ReadField<void*>("shade"); }
        void SetShade(void* value) const { WriteField<void*>("shade", value); }
        void* spec() const { return ReadField<void*>("spec"); }
        void SetSpec(void* value) const { WriteField<void*>("spec", value); }
        void* src() const { return ReadField<void*>("src"); }
        void SetSrc(void* value) const { WriteField<void*>("src", value); }
        void* sprite() const { return ReadField<void*>("sprite"); }
        void SetSprite(void* value) const { WriteField<void*>("sprite", value); }
        void* tex() const { return ReadField<void*>("tex"); }
        void SetTex(void* value) const { WriteField<void*>("tex", value); }
    };
}
