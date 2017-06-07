#ifndef OD_MSG_H
#define OD_MSG_H

/*
 * ODISSEY.
 *
 * PostgreSQL connection pooler and request router.
*/

typedef enum {
	OD_MCLIENT_NEW,
	OD_MROUTER_ROUTE,
	OD_MROUTER_UNROUTE,
	OD_MROUTER_ATTACH,
	OD_MROUTER_DETACH,
	OD_MROUTER_DETACH_AND_UNROUTE,
	OD_MROUTER_CLOSE_AND_UNROUTE,
	OD_MROUTER_CANCEL
} od_msg_t;

#endif /* OD_MSG_H */
