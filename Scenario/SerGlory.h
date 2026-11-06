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
        void people(int value) const { WriteField<int>("people", value); }
        int formerNationId() const { return ReadField<int>("formerNationId"); }
        void formerNationId(int value) const { WriteField<int>("formerNationId", value); }
        void* formerName() const { return ReadField<void*>("formerName"); }
        void formerName(void* value) const { WriteField<void*>("formerName", value); }
        float r() const { return ReadField<float>("r"); }
        void r(float value) const { WriteField<float>("r", value); }
        float g() const { return ReadField<float>("g"); }
        void g(float value) const { WriteField<float>("g", value); }
        float b() const { return ReadField<float>("b"); }
        void b(float value) const { WriteField<float>("b", value); }
        int peakTiles() const { return ReadField<int>("peakTiles"); }
        void peakTiles(int value) const { WriteField<int>("peakTiles", value); }
        void* anchors() const { return ReadField<void*>("anchors"); }
        void anchors(void* value) const { WriteField<void*>("anchors", value); }
        void* weights() const { return ReadField<void*>("weights"); }
        void weights(void* value) const { WriteField<void*>("weights", value); }
        int fallWorldTick() const { return ReadField<int>("fallWorldTick"); }
        void fallWorldTick(int value) const { WriteField<int>("fallWorldTick", value); }
        float wound() const { return ReadField<float>("wound"); }
        void wound(float value) const { WriteField<float>("wound", value); }
        int victorId() const { return ReadField<int>("victorId"); }
        void victorId(int value) const { WriteField<int>("victorId", value); }
        int cause() const { return ReadField<int>("cause"); }
        void cause(int value) const { WriteField<int>("cause", value); }
        float fallShare() const { return ReadField<float>("fallShare"); }
        void fallShare(float value) const { WriteField<float>("fallShare", value); }
    };
}
