#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class MapIdentity : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapIdentity(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "MapIdentity") {}
    public:
        void* place() const { return ReadField<void*>("place"); }
        void SetPlace(void* value) const { WriteField<void*>("place", value); }
        bool hasBounds() const { return ReadField<bool>("hasBounds"); }
        void SetHasBounds(bool value) const { WriteField<bool>("hasBounds", value); }
        float lonMin() const { return ReadField<float>("lonMin"); }
        void SetLonMin(float value) const { WriteField<float>("lonMin", value); }
        float lonMax() const { return ReadField<float>("lonMax"); }
        void SetLonMax(float value) const { WriteField<float>("lonMax", value); }
        float latMin() const { return ReadField<float>("latMin"); }
        void SetLatMin(float value) const { WriteField<float>("latMin", value); }
        float latMax() const { return ReadField<float>("latMax"); }
        void SetLatMax(float value) const { WriteField<float>("latMax", value); }
    };
}
