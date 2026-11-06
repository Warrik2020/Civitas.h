#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class BorderRefill : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BorderRefill(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "BorderRefill") {}
    public:
        void* Build(void* m, void* keyLayers, void* owner, void* carried) const { void* __callArgs[] = { m, keyLayers, owner, carried }; return CallStatic("Build", __callArgs, 4); }
        void* RunsFor(void* runs) const { void* __callArgs[] = { runs }; return Call("RunsFor", __callArgs, 1); }
        int OldKey(int i0) const { void* __callArgs[] = { &i0 }; return CallValue<int>("OldKey", __callArgs, 1); }
        int KeyAt(int x1, int y1) const { void* __callArgs[] = { &x1, &y1 }; return CallValue<int>("KeyAt", __callArgs, 2); }
        int OwnerOf(int key) const { void* __callArgs[] = { &key }; return CallValue<int>("OwnerOf", __callArgs, 1); }
    };
}
