#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class MoveState : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MoveState(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "MoveState") {}
    public:
        int phase() const { return ReadField<int>("phase"); }
        void phase(int value) const { WriteField<int>("phase", value); }
        int plan() const { return ReadField<int>("plan"); }
        void plan(int value) const { WriteField<int>("plan", value); }
        void* goal() const { return ReadField<void*>("goal"); }
        void goal(void* value) const { WriteField<void*>("goal", value); }
        bool hasGoal() const { return ReadField<bool>("hasGoal"); }
        void hasGoal(bool value) const { WriteField<bool>("hasGoal", value); }
        bool allowPress() const { return ReadField<bool>("allowPress"); }
        void allowPress(bool value) const { WriteField<bool>("allowPress", value); }
        void* progressPos() const { return ReadField<void*>("progressPos"); }
        void progressPos(void* value) const { WriteField<void*>("progressPos", value); }
        int progressTick() const { return ReadField<int>("progressTick"); }
        void progressTick(int value) const { WriteField<int>("progressTick", value); }
        int repathStrikes() const { return ReadField<int>("repathStrikes"); }
        void repathStrikes(int value) const { WriteField<int>("repathStrikes", value); }
        int repathAfterTick() const { return ReadField<int>("repathAfterTick"); }
        void repathAfterTick(int value) const { WriteField<int>("repathAfterTick", value); }
        int pressRetryTick() const { return ReadField<int>("pressRetryTick"); }
        void pressRetryTick(int value) const { WriteField<int>("pressRetryTick", value); }
        void* pressDir() const { return ReadField<void*>("pressDir"); }
        void pressDir(void* value) const { WriteField<void*>("pressDir", value); }
        int slotArmy() const { return ReadField<int>("slotArmy"); }
        void slotArmy(int value) const { WriteField<int>("slotArmy", value); }
        int slotPost() const { return ReadField<int>("slotPost"); }
        void slotPost(int value) const { WriteField<int>("slotPost", value); }
        int slotKind() const { return ReadField<int>("slotKind"); }
        void slotKind(int value) const { WriteField<int>("slotKind", value); }
        uint8_t slotTier() const { return ReadField<uint8_t>("slotTier"); }
        void slotTier(uint8_t value) const { WriteField<uint8_t>("slotTier", value); }
        int detachUntilTick() const { return ReadField<int>("detachUntilTick"); }
        void detachUntilTick(int value) const { WriteField<int>("detachUntilTick", value); }
        bool playerOrder() const { return ReadField<bool>("playerOrder"); }
        void playerOrder(bool value) const { WriteField<bool>("playerOrder", value); }
        int orderIdleSince() const { return ReadField<int>("orderIdleSince"); }
        void orderIdleSince(int value) const { WriteField<int>("orderIdleSince", value); }
        bool orderedFallback() const { return ReadField<bool>("orderedFallback"); }
        void orderedFallback(bool value) const { WriteField<bool>("orderedFallback", value); }
        bool noLand() const { return ReadField<bool>("noLand"); }
        void noLand(bool value) const { WriteField<bool>("noLand", value); }
        bool reachesGoal() const { return ReadField<bool>("reachesGoal"); }
        void reachesGoal(bool value) const { WriteField<bool>("reachesGoal", value); }
        float landTicks() const { return ReadField<float>("landTicks"); }
        void landTicks(float value) const { WriteField<float>("landTicks", value); }
        bool weighSea() const { return ReadField<bool>("weighSea"); }
        void weighSea(bool value) const { WriteField<bool>("weighSea", value); }
        int seaRetryTick() const { return ReadField<int>("seaRetryTick"); }
        void seaRetryTick(int value) const { WriteField<int>("seaRetryTick", value); }
        float progressRemain() const { return ReadField<float>("progressRemain"); }
        void progressRemain(float value) const { WriteField<float>("progressRemain", value); }
        int remainTick() const { return ReadField<int>("remainTick"); }
        void remainTick(int value) const { WriteField<int>("remainTick", value); }
    };
}
