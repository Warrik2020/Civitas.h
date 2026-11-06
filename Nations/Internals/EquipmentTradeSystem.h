#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class EquipmentTradeSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EquipmentTradeSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "EquipmentTradeSystem") {}
    public:
        float UnitCost(int holderId, int pool, void* ctx) const { void* args[] = { &holderId, &pool, &ctx }; return CallStaticValue<float>("UnitCost", args, 3); }
        float Fill(void* it, void* cfg, int pool) const { void* args[] = { it, cfg, &pool }; return CallStaticValue<float>("Fill", args, 3); }
        float NeedMul(void* it, void* cfg, int pool) const { void* args[] = { it, cfg, &pool }; return CallStaticValue<float>("NeedMul", args, 3); }
        float StockScarcity(float shipped, float stock) const { void* args[] = { &shipped, &stock }; return CallStaticValue<float>("StockScarcity", args, 2); }
        float ReceivedValue(int receiverId, int pool, float units, void* ctx, float patternMul = 1f) const { void* args[] = { &receiverId, &pool, &units, &ctx, &patternMul }; return CallStaticValue<float>("ReceivedValue", args, 5); }
        float GivenValue(int giverId, int pool, float units, void* ctx, float patternMul = 1f) const { void* args[] = { &giverId, &pool, &units, &ctx, &patternMul }; return CallStaticValue<float>("GivenValue", args, 5); }
        float ShipmentValue(void* item, int performerId, int evaluatorId, void* ctx) const { void* args[] = { item, &performerId, &evaluatorId, &ctx }; return CallStaticValue<float>("ShipmentValue", args, 4); }
        float ContractGold(void* item) const { void* args[] = { item }; return CallStaticValue<float>("ContractGold", args, 1); }
        float SupplierValue(void* item, int supplierId, int receiverId, void* ctx) const { void* args[] = { item, &supplierId, &receiverId, &ctx }; return CallStaticValue<float>("SupplierValue", args, 4); }
        float ReceiverValue(void* item, int receiverId, void* ctx) const { void* args[] = { item, &receiverId, &ctx }; return CallStaticValue<float>("ReceiverValue", args, 3); }
        float MaxContractPerTick(int supplierId, int pool, int ticks, void* ctx) const { void* args[] = { &supplierId, &pool, &ticks, &ctx }; return CallStaticValue<float>("MaxContractPerTick", args, 4); }
        float MaxContractPrice(int receiverId, float perTick, void* ctx) const { void* args[] = { &receiverId, &perTick, &ctx }; return CallStaticValue<float>("MaxContractPrice", args, 3); }
        bool EquipmentValid(void* item, int performerId, void* ctx) const { void* args[] = { item, &performerId, &ctx }; return CallStaticValue<bool>("EquipmentValid", args, 3); }
        bool ContractValid(void* item, int supplierId, int receiverId, void* mgr, void* ctx) const { void* args[] = { item, &supplierId, &receiverId, mgr, &ctx }; return CallStaticValue<bool>("ContractValid", args, 5); }
        float SolveContractPrice(void* deal, void* item, bool itemInGive, float targetChance, void* mgr, void* ctx, float& achieved) const { void* args[] = { deal, item, &itemInGive, &targetChance, mgr, &ctx, &achieved }; return CallStaticValue<float>("SolveContractPrice", args, 7); }
        float Ship(int pool, float units, int giverId, int receiverId, void* ctx, int designId = 0) const { void* args[] = { &pool, &units, &giverId, &receiverId, &ctx, &designId }; return CallStaticValue<float>("Ship", args, 6); }
        void* Tick(void** args = nullptr, int count = 0) const { return CallStatic("Tick", args, count); }
    };
}
