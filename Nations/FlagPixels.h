#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class FlagPixels : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FlagPixels(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "FlagPixels") {}
    public:
        bool TryGet(void* n, void* px, int& w, int& h) const { void* __callArgs[] = { n, &px, &w, &h }; return CallStaticValue<bool>("TryGet", __callArgs, 4); }
        bool TryGet(void* n, void* px, int& w, int& h, int& rim) const { void* __callArgs[] = { n, &px, &w, &h, &rim }; return CallStaticValue<bool>("TryGet", __callArgs, 5); }
        void Invalidate(int nationId) const { void* __callArgs[] = { &nationId }; CallStatic("Invalidate", __callArgs, 1); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
    };
}
