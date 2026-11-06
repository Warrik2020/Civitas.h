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
        void* Build(void* m, void* keyLayers, void* owner, void* carried) const { void* args[] = { m, keyLayers, owner, carried }; return CallStatic("Build", args, 4); }
        void* RunsFor(void* runs) const { void* args[] = { runs }; return Call("RunsFor", args, 1); }
        int OldKey(int i0) const { void* args[] = { &i0 }; return CallValue<int>("OldKey", args, 1); }
        int KeyAt(int x1, int y1) const { void* args[] = { &x1, &y1 }; return CallValue<int>("KeyAt", args, 2); }
        int OwnerOf(int key) const { void* args[] = { &key }; return CallValue<int>("OwnerOf", args, 1); }
    };
}
