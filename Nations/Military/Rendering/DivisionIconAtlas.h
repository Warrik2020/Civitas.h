#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class DivisionIconAtlas : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionIconAtlas(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "DivisionIconAtlas") {}
    public:
        void Ensure(float aspect, float shadeFloor) const { void* __callArgs[] = { &aspect, &shadeFloor }; CallStatic("Ensure", __callArgs, 2); }
        bool TryGetUv(int type, void* uv) const { void* __callArgs[] = { &type, &uv }; return CallStaticValue<bool>("TryGetUv", __callArgs, 2); }
    };
}
