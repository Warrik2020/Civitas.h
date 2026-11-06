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
        void Build(void* it, void* t, void* mcfg, void* icfg, int orderCount) const { void* __callArgs[] = { it, t, mcfg, icfg, &orderCount }; Call("Build", __callArgs, 5); }
        int Never() const { return ReadStaticField<int>("Never"); }
        void* piles() const { return ReadField<void*>("piles"); }
        int count() const { return ReadField<int>("count"); }
        void count(int value) const { WriteField<int>("count", value); }
        int ready() const { return ReadField<int>("ready"); }
        void ready(int value) const { WriteField<int>("ready", value); }
        int etaOne() const { return ReadField<int>("etaOne"); }
        void etaOne(int value) const { WriteField<int>("etaOne", value); }
        int etaAll() const { return ReadField<int>("etaAll"); }
        void etaAll(int value) const { WriteField<int>("etaAll", value); }
        int slowest() const { return ReadField<int>("slowest"); }
        void slowest(int value) const { WriteField<int>("slowest", value); }
        bool armed() const { return ReadField<bool>("armed"); }
        void armed(bool value) const { WriteField<bool>("armed", value); }
        float raiseShare() const { return ReadField<float>("raiseShare"); }
        void raiseShare(float value) const { WriteField<float>("raiseShare", value); }
    };
}
