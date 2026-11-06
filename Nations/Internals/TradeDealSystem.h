#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class TradeDealSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TradeDealSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "TradeDealSystem") {}
    public:
        bool Validate(void* deal, void* mgr, void* ctx) const { void* args[] = { deal, mgr, &ctx }; return CallStaticValue<bool>("Validate", args, 3); }
        float BondSignOpinion(int kind, void* cfg) const { void* args[] = { &kind, cfg }; return CallStaticValue<float>("BondSignOpinion", args, 2); }
        bool IsNamedShipment(void* item) const { void* args[] = { item }; return CallStaticValue<bool>("IsNamedShipment", args, 1); }
        bool AsksSubjectToFoldIn(void* deal, void* ctx) const { void* args[] = { deal, &ctx }; return CallStaticValue<bool>("AsksSubjectToFoldIn", args, 2); }
        bool PaidWarAllowed(int performerId) const { void* args[] = { &performerId }; return CallStaticValue<bool>("PaidWarAllowed", args, 1); }
        float PaidWarMul(int performerId) const { void* args[] = { &performerId }; return CallStaticValue<float>("PaidWarMul", args, 1); }
        int DivisionsAvailable(void* item, int performerId, void* mgr) const { void* args[] = { item, &performerId, mgr }; return CallStaticValue<int>("DivisionsAvailable", args, 3); }
        float EconomicScale(int nationId, void* ctx) const { void* args[] = { &nationId, &ctx }; return CallStaticValue<float>("EconomicScale", args, 2); }
        float GoldReceivedValue(float gold, float scale, void* cfg) const { void* args[] = { &gold, &scale, cfg }; return CallStaticValue<float>("GoldReceivedValue", args, 3); }
        float GoldForValue(float value, float scale, void* cfg) const { void* args[] = { &value, &scale, cfg }; return CallStaticValue<float>("GoldForValue", args, 3); }
        float GoldReceivedValue(float gold, float recent, float scale, void* cfg) const { void* args[] = { &gold, &recent, &scale, cfg }; return CallStaticValue<float>("GoldReceivedValue", args, 4); }
        float GoldForValue(float value, float recent, float scale, void* cfg) const { void* args[] = { &value, &recent, &scale, cfg }; return CallStaticValue<float>("GoldForValue", args, 4); }
        float GoldReceivedValue(float gold, int receiverId, void* ctx) const { void* args[] = { &gold, &receiverId, &ctx }; return CallStaticValue<float>("GoldReceivedValue", args, 3); }
        float GoldForValue(float value, int receiverId, void* ctx) const { void* args[] = { &value, &receiverId, &ctx }; return CallStaticValue<float>("GoldForValue", args, 3); }
        float GoldReceived(void* it, void* ctx) const { void* args[] = { it, &ctx }; return CallStaticValue<float>("GoldReceived", args, 2); }
        float LandScarcity(int cededTiles, int giverTiles, void* cfg) const { void* args[] = { &cededTiles, &giverTiles, cfg }; return CallStaticValue<float>("LandScarcity", args, 3); }
        float LandScarcity(float share, float soldBefore, float takenInDeal, void* cfg) const { void* args[] = { &share, &soldBefore, &takenInDeal, cfg }; return CallStaticValue<float>("LandScarcity", args, 4); }
        float LandSold(void* it, void* ctx) const { void* args[] = { it, &ctx }; return CallStaticValue<float>("LandSold", args, 2); }
        float LandShare(void* item, int giverId, void* mgr, void* ctx, int& owned, int& heartland) const { void* args[] = { item, &giverId, mgr, &ctx, &owned, &heartland }; return CallStaticValue<float>("LandShare", args, 6); }
        float RealmLandWorth(int holderId, void* ctx) const { void* args[] = { &holderId, &ctx }; return CallStaticValue<float>("RealmLandWorth", args, 2); }
        float ArmyScarcity(int givenDivisions, int fieldedDivisions, void* cfg) const { void* args[] = { &givenDivisions, &fieldedDivisions, cfg }; return CallStaticValue<float>("ArmyScarcity", args, 3); }
        float TileValue(int holderId, void* ctx) const { void* args[] = { &holderId, &ctx }; return CallStaticValue<float>("TileValue", args, 2); }
        float CapitalValue(int holderId, void* ctx) const { void* args[] = { &holderId, &ctx }; return CallStaticValue<float>("CapitalValue", args, 2); }
        float FactoryValue(int holderId, void* ctx) const { void* args[] = { &holderId, &ctx }; return CallStaticValue<float>("FactoryValue", args, 2); }
        float DivisionValue(int holderId, int type, void* mgr, void* ctx) const { void* args[] = { &holderId, &type, mgr, &ctx }; return CallStaticValue<float>("DivisionValue", args, 4); }
        float ItemValue(void* item, int performerId, int beneficiaryId, int evaluatorId, void* mgr, void* ctx) const { void* args[] = { item, &performerId, &beneficiaryId, &evaluatorId, mgr, &ctx }; return CallStaticValue<float>("ItemValue", args, 6); }
        float AnnexationWorth(int performerId, void* mgr, void* ctx) const { void* args[] = { &performerId, mgr, &ctx }; return CallStaticValue<float>("AnnexationWorth", args, 3); }
        float GoldOn(void* side) const { void* args[] = { side }; return CallStaticValue<float>("GoldOn", args, 1); }
        float ValueNorm(int evaluatorId, void* ctx) const { void* args[] = { &evaluatorId, &ctx }; return CallStaticValue<float>("ValueNorm", args, 2); }
        float NetValue(void* deal, void* mgr, void* ctx) const { void* args[] = { deal, mgr, &ctx }; return CallStaticValue<float>("NetValue", args, 3); }
        float AcceptanceChance(void* deal, void* mgr, void* ctx) const { void* args[] = { deal, mgr, &ctx }; return CallStaticValue<float>("AcceptanceChance", args, 3); }
        float SolveGold(void* deal, void* item, bool paying, float maxGold, float targetChance, void* mgr, void* ctx, float& achieved) const { void* args[] = { deal, item, &paying, &maxGold, &targetChance, mgr, &ctx, &achieved }; return CallStaticValue<float>("SolveGold", args, 8); }
        void Execute(void* deal, void* mgr, void* ctx) const { void* args[] = { deal, mgr, &ctx }; CallStatic("Execute", args, 3); }
    };
}
