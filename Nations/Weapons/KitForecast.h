#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class KitForecast : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit KitForecast(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "KitForecast") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        void Build(void* it, void* t, void* mcfg, void* icfg, int orderCount) const { void* args[] = { it, t, mcfg, icfg, &orderCount }; Call("Build", args, 5); }
        int Never() const { return ReadStaticField<int>("Never"); }
        void* piles() const { return ReadField<void*>("piles"); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
        int ready() const { return ReadField<int>("ready"); }
        void SetReady(int value) const { WriteField<int>("ready", value); }
        int etaOne() const { return ReadField<int>("etaOne"); }
        void SetEtaOne(int value) const { WriteField<int>("etaOne", value); }
        int etaAll() const { return ReadField<int>("etaAll"); }
        void SetEtaAll(int value) const { WriteField<int>("etaAll", value); }
        int slowest() const { return ReadField<int>("slowest"); }
        void SetSlowest(int value) const { WriteField<int>("slowest", value); }
        bool armed() const { return ReadField<bool>("armed"); }
        void SetArmed(bool value) const { WriteField<bool>("armed", value); }
        float raiseShare() const { return ReadField<float>("raiseShare"); }
        void SetRaiseShare(float value) const { WriteField<float>("raiseShare", value); }
        bool used() const { return ReadField<bool>("used"); }
        void SetUsed(bool value) const { WriteField<bool>("used", value); }
        float needOne() const { return ReadField<float>("needOne"); }
        void SetNeedOne(float value) const { WriteField<float>("needOne", value); }
        float need() const { return ReadField<float>("need"); }
        void SetNeed(float value) const { WriteField<float>("need", value); }
        float have() const { return ReadField<float>("have"); }
        void SetHave(float value) const { WriteField<float>("have", value); }
        float full() const { return ReadField<float>("full"); }
        void SetFull(float value) const { WriteField<float>("full", value); }
        float perTick() const { return ReadField<float>("perTick"); }
        void SetPerTick(float value) const { WriteField<float>("perTick", value); }
        int etaOne() const { return ReadField<int>("etaOne"); }
        void SetEtaOne(int value) const { WriteField<int>("etaOne", value); }
        int etaAll() const { return ReadField<int>("etaAll"); }
        void SetEtaAll(int value) const { WriteField<int>("etaAll", value); }
        void* wait() const { return ReadField<void*>("wait"); }
        void SetWait(void* value) const { WriteField<void*>("wait", value); }
        int waitDesign() const { return ReadField<int>("waitDesign"); }
        void SetWaitDesign(int value) const { WriteField<int>("waitDesign", value); }
    };
}
