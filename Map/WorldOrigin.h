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
        void Adopt(void* t) const { void* __callArgs[] = { t }; CallStatic("Adopt", __callArgs, 1); }
        void Place(void* t, float z) const { void* __callArgs[] = { t, &z }; CallStatic("Place", __callArgs, 2); }
        void PlaceInRenderSpace(void* t, float z) const { void* __callArgs[] = { t, &z }; CallStatic("PlaceInRenderSpace", __callArgs, 2); }
        void* ToRender(void* logical) const { void* __callArgs[] = { logical }; return CallStatic("ToRender", __callArgs, 1); }
        void* ToLogical(void* render) const { void* __callArgs[] = { render }; return CallStatic("ToLogical", __callArgs, 1); }
        bool Set(void* r) const { void* __callArgs[] = { r }; return CallStaticValue<bool>("Set", __callArgs, 1); }
        float SnapWorld() const { return ReadStaticField<float>("SnapWorld"); }
    };
}
