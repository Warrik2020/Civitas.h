#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class FlagLibrary : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FlagLibrary(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "FlagLibrary") {}
    public:
        void* NameOf(int i) const { void* __callArgs[] = { &i }; return CallStatic("NameOf", __callArgs, 1); }
        void* SourceOf(int i) const { void* __callArgs[] = { &i }; return CallStatic("SourceOf", __callArgs, 1); }
        void BeginScan() const { CallStatic("BeginScan", nullptr, 0); }
        void* Art(int i) const { void* __callArgs[] = { &i }; return CallStatic("Art", __callArgs, 1); }
        void* Pixels(int i, int& w, int& h) const { void* __callArgs[] = { &i, &w, &h }; return CallStatic("Pixels", __callArgs, 3); }
        void ReleaseArt(int i) const { void* __callArgs[] = { &i }; CallStatic("ReleaseArt", __callArgs, 1); }
        void ReleaseArt() const { CallStatic("ReleaseArt", nullptr, 0); }
    };
}
