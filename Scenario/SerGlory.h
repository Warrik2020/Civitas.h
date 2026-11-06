#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerGlory : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerGlory(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerGlory") {}
    public:
        int people() const { return ReadField<int>("people"); }
        void SetPeople(int value) const { WriteField<int>("people", value); }
        int formerNationId() const { return ReadField<int>("formerNationId"); }
        void SetFormerNationId(int value) const { WriteField<int>("formerNationId", value); }
        void* formerName() const { return ReadField<void*>("formerName"); }
        void SetFormerName(void* value) const { WriteField<void*>("formerName", value); }
        float r() const { return ReadField<float>("r"); }
        void SetR(float value) const { WriteField<float>("r", value); }
        float g() const { return ReadField<float>("g"); }
        void SetG(float value) const { WriteField<float>("g", value); }
        float b() const { return ReadField<float>("b"); }
        void SetB(float value) const { WriteField<float>("b", value); }
        int peakTiles() const { return ReadField<int>("peakTiles"); }
        void SetPeakTiles(int value) const { WriteField<int>("peakTiles", value); }
        void* anchors() const { return ReadField<void*>("anchors"); }
        void SetAnchors(void* value) const { WriteField<void*>("anchors", value); }
        void* weights() const { return ReadField<void*>("weights"); }
        void SetWeights(void* value) const { WriteField<void*>("weights", value); }
        int fallWorldTick() const { return ReadField<int>("fallWorldTick"); }
        void SetFallWorldTick(int value) const { WriteField<int>("fallWorldTick", value); }
        float wound() const { return ReadField<float>("wound"); }
        void SetWound(float value) const { WriteField<float>("wound", value); }
        int victorId() const { return ReadField<int>("victorId"); }
        void SetVictorId(int value) const { WriteField<int>("victorId", value); }
        int cause() const { return ReadField<int>("cause"); }
        void SetCause(int value) const { WriteField<int>("cause", value); }
        float fallShare() const { return ReadField<float>("fallShare"); }
        void SetFallShare(float value) const { WriteField<float>("fallShare", value); }
    };
}
