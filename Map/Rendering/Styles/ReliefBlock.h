#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Styles
{
    class ReliefBlock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ReliefBlock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Styles", "ReliefBlock") {}
    public:
        float gain() const { return ReadField<float>("gain"); }
        void SetGain(float value) const { WriteField<float>("gain", value); }
    };
}
