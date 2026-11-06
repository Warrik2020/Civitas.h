#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class WorldSoak : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorldSoak(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "WorldSoak") {}
    public:
        void* scenario() const { return ReadField<void*>("scenario"); }
        void SetScenario(void* value) const { WriteField<void*>("scenario", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int years() const { return ReadField<int>("years"); }
        void SetYears(int value) const { WriteField<int>("years", value); }
        bool aiLod() const { return ReadField<bool>("aiLod"); }
        void SetAiLod(bool value) const { WriteField<bool>("aiLod", value); }
        void* player() const { return ReadField<void*>("player"); }
        void SetPlayer(void* value) const { WriteField<void*>("player", value); }
        bool fast() const { return ReadField<bool>("fast"); }
        void SetFast(bool value) const { WriteField<bool>("fast", value); }
        bool quit() const { return ReadField<bool>("quit"); }
        void SetQuit(bool value) const { WriteField<bool>("quit", value); }
        int provokeYears() const { return ReadField<int>("provokeYears"); }
        void SetProvokeYears(int value) const { WriteField<int>("provokeYears", value); }
        int level() const { return ReadField<int>("level"); }
        void SetLevel(int value) const { WriteField<int>("level", value); }
        int aggression() const { return ReadField<int>("aggression"); }
        void SetAggression(int value) const { WriteField<int>("aggression", value); }
    };
}
