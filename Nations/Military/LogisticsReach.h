#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class LogisticsReach : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LogisticsReach(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "LogisticsReach") {}
    public:
        float network() const { return ReadField<float>("network"); }
        void SetNetwork(float value) const { WriteField<float>("network", value); }
        float forage() const { return ReadField<float>("forage"); }
        void SetForage(float value) const { WriteField<float>("forage", value); }
        float roadGain() const { return ReadField<float>("roadGain"); }
        void SetRoadGain(float value) const { WriteField<float>("roadGain", value); }
        int sourceIndex() const { return ReadField<int>("sourceIndex"); }
        void SetSourceIndex(int value) const { WriteField<int>("sourceIndex", value); }
        uint8_t cellClass() const { return ReadField<uint8_t>("cellClass"); }
        void SetCellClass(uint8_t value) const { WriteField<uint8_t>("cellClass", value); }
        bool reached() const { return ReadField<bool>("reached"); }
        void SetReached(bool value) const { WriteField<bool>("reached", value); }
    };
}
