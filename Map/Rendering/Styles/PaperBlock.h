#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Styles
{
    class PaperBlock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PaperBlock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Styles", "PaperBlock") {}
    public:
        void* texture() const { return ReadField<void*>("texture"); }
        void SetTexture(void* value) const { WriteField<void*>("texture", value); }
        float scaleTiles() const { return ReadField<float>("scaleTiles"); }
        void SetScaleTiles(float value) const { WriteField<float>("scaleTiles", value); }
        int rotate() const { return ReadField<int>("rotate"); }
        void SetRotate(int value) const { WriteField<int>("rotate", value); }
        void* ground() const { return ReadField<void*>("ground"); }
        void SetGround(void* value) const { WriteField<void*>("ground", value); }
        void* grain() const { return ReadField<void*>("grain"); }
        void SetGrain(void* value) const { WriteField<void*>("grain", value); }
    };
}
