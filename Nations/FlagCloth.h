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
        void* For_(void* n) const { void* __callArgs[] = { n }; return CallStatic("For", __callArgs, 1); }
        bool TryPixels(void* n, int maxWidth, void* px, int& w, int& h) const { void* __callArgs[] = { n, &maxWidth, &px, &w, &h }; return CallStaticValue<bool>("TryPixels", __callArgs, 5); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        int BakeWidth() const { return ReadStaticField<int>("BakeWidth"); }
    };
}
