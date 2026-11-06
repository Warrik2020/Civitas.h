#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Map
{
    class WorldOrigin : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorldOrigin(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map", "WorldOrigin") {}
    public:
        void Adopt(void* t) const { void* args[] = { t }; CallStatic("Adopt", args, 1); }
        void Place(void* t, float z) const { void* args[] = { t, &z }; CallStatic("Place", args, 2); }
        void PlaceInRenderSpace(void* t, float z) const { void* args[] = { t, &z }; CallStatic("PlaceInRenderSpace", args, 2); }
        void* ToRender(void* logical) const { void* args[] = { logical }; return CallStatic("ToRender", args, 1); }
        void* ToLogical(void* render) const { void* args[] = { render }; return CallStatic("ToLogical", args, 1); }
        bool Set(void* r) const { void* args[] = { r }; return CallStaticValue<bool>("Set", args, 1); }
        float SnapWorld() const { return ReadStaticField<float>("SnapWorld"); }
    };
}
