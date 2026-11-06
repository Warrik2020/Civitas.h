#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Styles
{
    class StateBlock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateBlock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Styles", "StateBlock") {}
    public:
        float opacity() const { return ReadField<float>("opacity"); }
        void opacity(float value) const { WriteField<float>("opacity", value); }
    };
}
