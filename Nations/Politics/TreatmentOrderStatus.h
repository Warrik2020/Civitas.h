#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class TreatmentOrderStatus : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TreatmentOrderStatus(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "TreatmentOrderStatus") {}
    public:
        int people() const { return ReadField<int>("people"); }
        void people(int value) const { WriteField<int>("people", value); }
        int axis() const { return ReadField<int>("axis"); }
        void axis(int value) const { WriteField<int>("axis", value); }
        int realm() const { return ReadField<int>("realm"); }
        void realm(int value) const { WriteField<int>("realm", value); }
        int zone() const { return ReadField<int>("zone"); }
        void zone(int value) const { WriteField<int>("zone", value); }
        bool purge() const { return ReadField<bool>("purge"); }
        void purge(bool value) const { WriteField<bool>("purge", value); }
        bool realmScope() const { return ReadField<bool>("realmScope"); }
        void realmScope(bool value) const { WriteField<bool>("realmScope", value); }
        bool measuring() const { return ReadField<bool>("measuring"); }
        void measuring(bool value) const { WriteField<bool>("measuring", value); }
        bool idle() const { return ReadField<bool>("idle"); }
        void idle(bool value) const { WriteField<bool>("idle", value); }
        bool noScope() const { return ReadField<bool>("noScope"); }
        void noScope(bool value) const { WriteField<bool>("noScope", value); }
        float removedTiles() const { return ReadField<float>("removedTiles"); }
        void removedTiles(float value) const { WriteField<float>("removedTiles", value); }
        float remainingTiles() const { return ReadField<float>("remainingTiles"); }
        void remainingTiles(float value) const { WriteField<float>("remainingTiles", value); }
        float lastTickTiles() const { return ReadField<float>("lastTickTiles"); }
        void lastTickTiles(float value) const { WriteField<float>("lastTickTiles", value); }
        int sinceTick() const { return ReadField<int>("sinceTick"); }
        void sinceTick(int value) const { WriteField<int>("sinceTick", value); }
        int idleSinceTick() const { return ReadField<int>("idleSinceTick"); }
        void idleSinceTick(int value) const { WriteField<int>("idleSinceTick", value); }
        float billPerTick() const { return ReadField<float>("billPerTick"); }
        void billPerTick(float value) const { WriteField<float>("billPerTick", value); }
    };
}
