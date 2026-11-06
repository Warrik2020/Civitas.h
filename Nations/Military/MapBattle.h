#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class MapBattle : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapBattle(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "MapBattle") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int defenderId() const { return ReadField<int>("defenderId"); }
        void defenderId(int value) const { WriteField<int>("defenderId", value); }
        int defenderNationId() const { return ReadField<int>("defenderNationId"); }
        void defenderNationId(int value) const { WriteField<int>("defenderNationId", value); }
        int attackerNationId() const { return ReadField<int>("attackerNationId"); }
        void attackerNationId(int value) const { WriteField<int>("attackerNationId", value); }
        int startTick() const { return ReadField<int>("startTick"); }
        void startTick(int value) const { WriteField<int>("startTick", value); }
        int lastTick() const { return ReadField<int>("lastTick"); }
        void lastTick(int value) const { WriteField<int>("lastTick", value); }
        bool live() const { return ReadField<bool>("live"); }
        void live(bool value) const { WriteField<bool>("live", value); }
        bool meeting() const { return ReadField<bool>("meeting"); }
        void meeting(bool value) const { WriteField<bool>("meeting", value); }
        int result() const { return ReadField<int>("result"); }
        void result(int value) const { WriteField<int>("result", value); }
        int endTick() const { return ReadField<int>("endTick"); }
        void endTick(int value) const { WriteField<int>("endTick", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void pos(void* value) const { WriteField<void*>("pos", value); }
        void* attackerCentre() const { return ReadField<void*>("attackerCentre"); }
        void attackerCentre(void* value) const { WriteField<void*>("attackerCentre", value); }
        void* defenderCentre() const { return ReadField<void*>("defenderCentre"); }
        void defenderCentre(void* value) const { WriteField<void*>("defenderCentre", value); }
        void* defenders() const { return ReadField<void*>("defenders"); }
        void* attackers() const { return ReadField<void*>("attackers"); }
        void* claimed() const { return ReadField<void*>("claimed"); }
        float frontWidth() const { return ReadField<float>("frontWidth"); }
        void frontWidth(float value) const { WriteField<float>("frontWidth", value); }
        float frontLoad() const { return ReadField<float>("frontLoad"); }
        void frontLoad(float value) const { WriteField<float>("frontLoad", value); }
        bool fought() const { return ReadField<bool>("fought"); }
        void fought(bool value) const { WriteField<bool>("fought", value); }
        float progress() const { return ReadField<float>("progress"); }
        void progress(float value) const { WriteField<float>("progress", value); }
        float defenderOrgLoss() const { return ReadField<float>("defenderOrgLoss"); }
        void defenderOrgLoss(float value) const { WriteField<float>("defenderOrgLoss", value); }
        float attackerOrgLoss() const { return ReadField<float>("attackerOrgLoss"); }
        void attackerOrgLoss(float value) const { WriteField<float>("attackerOrgLoss", value); }
        float defenderOrg() const { return ReadField<float>("defenderOrg"); }
        void defenderOrg(float value) const { WriteField<float>("defenderOrg", value); }
        float attackerOrg() const { return ReadField<float>("attackerOrg"); }
        void attackerOrg(float value) const { WriteField<float>("attackerOrg", value); }
        float ticksToBreak() const { return ReadField<float>("ticksToBreak"); }
        void ticksToBreak(float value) const { WriteField<float>("ticksToBreak", value); }
        float ticksToStall() const { return ReadField<float>("ticksToStall"); }
        void ticksToStall(float value) const { WriteField<float>("ticksToStall", value); }
        float defenderMen() const { return ReadField<float>("defenderMen"); }
        void defenderMen(float value) const { WriteField<float>("defenderMen", value); }
        float attackerMen() const { return ReadField<float>("attackerMen"); }
        void attackerMen(float value) const { WriteField<float>("attackerMen", value); }
        float defenderLost() const { return ReadField<float>("defenderLost"); }
        void defenderLost(float value) const { WriteField<float>("defenderLost", value); }
        float attackerLost() const { return ReadField<float>("attackerLost"); }
        void attackerLost(float value) const { WriteField<float>("attackerLost", value); }
        float postureMul() const { return ReadField<float>("postureMul"); }
        void postureMul(float value) const { WriteField<float>("postureMul", value); }
        float defenderArmourMul() const { return ReadField<float>("defenderArmourMul"); }
        void defenderArmourMul(float value) const { WriteField<float>("defenderArmourMul", value); }
        float attackerArmourMul() const { return ReadField<float>("attackerArmourMul"); }
        void attackerArmourMul(float value) const { WriteField<float>("attackerArmourMul", value); }
        int terms() const { return ReadField<int>("terms"); }
        void terms(int value) const { WriteField<int>("terms", value); }
        float width() const { return ReadField<float>("width"); }
        void width(float value) const { WriteField<float>("width", value); }
        float usedWidth() const { return ReadField<float>("usedWidth"); }
        void usedWidth(float value) const { WriteField<float>("usedWidth", value); }
        int attackerReserves() const { return ReadField<int>("attackerReserves"); }
        void attackerReserves(int value) const { WriteField<int>("attackerReserves", value); }
        int defenderReserves() const { return ReadField<int>("defenderReserves"); }
        void defenderReserves(int value) const { WriteField<int>("defenderReserves", value); }
        int flankSides() const { return ReadField<int>("flankSides"); }
        void flankSides(int value) const { WriteField<int>("flankSides", value); }
    };
}
