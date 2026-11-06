#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerLpEpisode : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerLpEpisode(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerLpEpisode") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void arcId(int value) const { WriteField<int>("arcId", value); }
        int attacker() const { return ReadField<int>("attacker"); }
        void attacker(int value) const { WriteField<int>("attacker", value); }
        int defender() const { return ReadField<int>("defender"); }
        void defender(int value) const { WriteField<int>("defender", value); }
        int started() const { return ReadField<int>("started"); }
        void started(int value) const { WriteField<int>("started", value); }
        int beats() const { return ReadField<int>("beats"); }
        void beats(int value) const { WriteField<int>("beats", value); }
        int pleaTick() const { return ReadField<int>("pleaTick"); }
        void pleaTick(int value) const { WriteField<int>("pleaTick", value); }
        bool independence() const { return ReadField<bool>("independence"); }
        void independence(bool value) const { WriteField<bool>("independence", value); }
        void* bystanders() const { return ReadField<void*>("bystanders"); }
        void bystanders(void* value) const { WriteField<void*>("bystanders", value); }
        void* stages() const { return ReadField<void*>("stages"); }
        void stages(void* value) const { WriteField<void*>("stages", value); }
        void* lastAct() const { return ReadField<void*>("lastAct"); }
        void lastAct(void* value) const { WriteField<void*>("lastAct", value); }
        void* leans() const { return ReadField<void*>("leans"); }
        void leans(void* value) const { WriteField<void*>("leans", value); }
        void* aid() const { return ReadField<void*>("aid"); }
        void aid(void* value) const { WriteField<void*>("aid", value); }
        void* cheered() const { return ReadField<void*>("cheered"); }
        void cheered(void* value) const { WriteField<void*>("cheered", value); }
        void* noted() const { return ReadField<void*>("noted"); }
        void noted(void* value) const { WriteField<void*>("noted", value); }
    };
}
