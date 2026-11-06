#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class SimBench : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SimBench(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "SimBench") {}
    public:
        void* scenario() const { return ReadField<void*>("scenario"); }
        void SetScenario(void* value) const { WriteField<void*>("scenario", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int role() const { return ReadField<int>("role"); }
        void SetRole(int value) const { WriteField<int>("role", value); }
        void* speeds() const { return ReadField<void*>("speeds"); }
        void SetSpeeds(void* value) const { WriteField<void*>("speeds", value); }
        float seconds() const { return ReadField<float>("seconds"); }
        void SetSeconds(float value) const { WriteField<float>("seconds", value); }
        int warmupTicks() const { return ReadField<int>("warmupTicks"); }
        void SetWarmupTicks(int value) const { WriteField<int>("warmupTicks", value); }
        void* view() const { return ReadField<void*>("view"); }
        void SetView(void* value) const { WriteField<void*>("view", value); }
        int staged() const { return ReadField<int>("staged"); }
        void SetStaged(int value) const { WriteField<int>("staged", value); }
        float scale() const { return ReadField<float>("scale"); }
        void SetScale(float value) const { WriteField<float>("scale", value); }
        bool quit() const { return ReadField<bool>("quit"); }
        void SetQuit(bool value) const { WriteField<bool>("quit", value); }
    };
}
