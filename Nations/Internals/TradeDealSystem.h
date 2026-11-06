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
        bool Validate(void* deal, void* mgr, void* ctx) const { void* __callArgs[] = { deal, mgr, &ctx }; return CallStaticValue<bool>("Validate", __callArgs, 3); }
        float BondSignOpinion(int kind, void* cfg) const { void* __callArgs[] = { &kind, cfg }; return CallStaticValue<float>("BondSignOpinion", __callArgs, 2); }
        bool IsNamedShipment(void* item) const { void* __callArgs[] = { item }; return CallStaticValue<bool>("IsNamedShipment", __callArgs, 1); }
        bool AsksSubjectToFoldIn(void* deal, void* ctx) const { void* __callArgs[] = { deal, &ctx }; return CallStaticValue<bool>("AsksSubjectToFoldIn", __callArgs, 2); }
        bool PaidWarAllowed(int performerId) const { void* __callArgs[] = { &performerId }; return CallStaticValue<bool>("PaidWarAllowed", __callArgs, 1); }
        float PaidWarMul(int performerId) const { void* __callArgs[] = { &performerId }; return CallStaticValue<float>("PaidWarMul", __callArgs, 1); }
        int DivisionsAvailable(void* item, int performerId, void* mgr) const { void* __callArgs[] = { item, &performerId, mgr }; return CallStaticValue<int>("DivisionsAvailable", __callArgs, 3); }
        float EconomicScale(int nationId, void* ctx) const { void* __callArgs[] = { &nationId, &ctx }; return CallStaticValue<float>("EconomicScale", __callArgs, 2); }
        float GoldReceivedValue(float gold, float scale, void* cfg) const { void* __callArgs[] = { &gold, &scale, cfg }; return CallStaticValue<float>("GoldReceivedValue", __callArgs, 3); }
        float GoldForValue(float value, float scale, void* cfg) const { void* __callArgs[] = { &value, &scale, cfg }; return CallStaticValue<float>("GoldForValue", __callArgs, 3); }
        float GoldReceivedValue(float gold, float recent, float scale, void* cfg) const { void* __callArgs[] = { &gold, &recent, &scale, cfg }; return CallStaticValue<float>("GoldReceivedValue", __callArgs, 4); }
        float GoldForValue(float value, float recent, float scale, void* cfg) const { void* __callArgs[] = { &value, &recent, &scale, cfg }; return CallStaticValue<float>("GoldForValue", __callArgs, 4); }
        float GoldReceivedValue(float gold, int receiverId, void* ctx) const { void* __callArgs[] = { &gold, &receiverId, &ctx }; return CallStaticValue<float>("GoldReceivedValue", __callArgs, 3); }
        float GoldForValue(float value, int receiverId, void* ctx) const { void* __callArgs[] = { &value, &receiverId, &ctx }; return CallStaticValue<float>("GoldForValue", __callArgs, 3); }
        float GoldReceived(void* it, void* ctx) const { void* __callArgs[] = { it, &ctx }; return CallStaticValue<float>("GoldReceived", __callArgs, 2); }
        float LandScarcity(int cededTiles, int giverTiles, void* cfg) const { void* __callArgs[] = { &cededTiles, &giverTiles, cfg }; return CallStaticValue<float>("LandScarcity", __callArgs, 3); }
        float LandScarcity(float share, float soldBefore, float takenInDeal, void* cfg) const { void* __callArgs[] = { &share, &soldBefore, &takenInDeal, cfg }; return CallStaticValue<float>("LandScarcity", __callArgs, 4); }
        float LandSold(void* it, void* ctx) const { void* __callArgs[] = { it, &ctx }; return CallStaticValue<float>("LandSold", __callArgs, 2); }
        float LandShare(void* item, int giverId, void* mgr, void* ctx, int& owned, int& heartland) const { void* __callArgs[] = { item, &giverId, mgr, &ctx, &owned, &heartland }; return CallStaticValue<float>("LandShare", __callArgs, 6); }
        float RealmLandWorth(int holderId, void* ctx) const { void* __callArgs[] = { &holderId, &ctx }; return CallStaticValue<float>("RealmLandWorth", __callArgs, 2); }
        float ArmyScarcity(int givenDivisions, int fieldedDivisions, void* cfg) const { void* __callArgs[] = { &givenDivisions, &fieldedDivisions, cfg }; return CallStaticValue<float>("ArmyScarcity", __callArgs, 3); }
        float TileValue(int holderId, void* ctx) const { void* __callArgs[] = { &holderId, &ctx }; return CallStaticValue<float>("TileValue", __callArgs, 2); }
        float CapitalValue(int holderId, void* ctx) const { void* __callArgs[] = { &holderId, &ctx }; return CallStaticValue<float>("CapitalValue", __callArgs, 2); }
        float FactoryValue(int holderId, void* ctx) const { void* __callArgs[] = { &holderId, &ctx }; return CallStaticValue<float>("FactoryValue", __callArgs, 2); }
        float DivisionValue(int holderId, int type, void* mgr, void* ctx) const { void* __callArgs[] = { &holderId, &type, mgr, &ctx }; return CallStaticValue<float>("DivisionValue", __callArgs, 4); }
        float ItemValue(void* item, int performerId, int beneficiaryId, int evaluatorId, void* mgr, void* ctx) const { void* __callArgs[] = { item, &performerId, &beneficiaryId, &evaluatorId, mgr, &ctx }; return CallStaticValue<float>("ItemValue", __callArgs, 6); }
        float AnnexationWorth(int performerId, void* mgr, void* ctx) const { void* __callArgs[] = { &performerId, mgr, &ctx }; return CallStaticValue<float>("AnnexationWorth", __callArgs, 3); }
        float GoldOn(void* side) const { void* __callArgs[] = { side }; return CallStaticValue<float>("GoldOn", __callArgs, 1); }
        float ValueNorm(int evaluatorId, void* ctx) const { void* __callArgs[] = { &evaluatorId, &ctx }; return CallStaticValue<float>("ValueNorm", __callArgs, 2); }
        float NetValue(void* deal, void* mgr, void* ctx) const { void* __callArgs[] = { deal, mgr, &ctx }; return CallStaticValue<float>("NetValue", __callArgs, 3); }
        float AcceptanceChance(void* deal, void* mgr, void* ctx) const { void* __callArgs[] = { deal, mgr, &ctx }; return CallStaticValue<float>("AcceptanceChance", __callArgs, 3); }
        float SolveGold(void* deal, void* item, bool paying, float maxGold, float targetChance, void* mgr, void* ctx, float& achieved) const { void* __callArgs[] = { deal, item, &paying, &maxGold, &targetChance, mgr, &ctx, &achieved }; return CallStaticValue<float>("SolveGold", __callArgs, 8); }
        void Execute(void* deal, void* mgr, void* ctx) const { void* __callArgs[] = { deal, mgr, &ctx }; CallStatic("Execute", __callArgs, 3); }
    };
}
